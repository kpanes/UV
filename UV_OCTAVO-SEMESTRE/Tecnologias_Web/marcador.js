var map = L.map('map').setView([19.566440, -96.904626], 13);

L.tileLayer('https://tile.openstreetmap.org/{z}/{x}/{y}.png', {
    maxZoom: 19,
    attribution: '&copy; <a href="http://www.openstreetmap.org/copyright">OpenStreetMap</a>'
}).addTo(map);

var markers = [];

function addMarker(lat, lng, message) {
    var marker = L.marker([lat, lng], { draggable: true });
    marker.id = L.Util.stamp(marker);
    marker.addTo(map);
    markers.push(marker);
    var popupContent = "<b>Latitud:</b> " + lat + "<br><b>Longitud:</b> " + lng + "<br><input type='text' id='messageInput'><br><button onclick='removeMarker(" + marker.id + ")'>Eliminar</button>";
    if (message) {
        popupContent = "<b>Latitud:</b> " + lat + "<br><b>Longitud:</b> " + lng + "<br><input type='text' id='messageInput' value='" + message + "'><br><button onclick='removeMarker(" + marker.id + ")'>Eliminar</button>";
    }
    marker.bindPopup(popupContent).openPopup();
}

function removeMarker(id) {
    for (var i = 0; i < markers.length; i++) {
        if (markers[i].id === id) {
            map.removeLayer(markers[i]);
            markers.splice(i, 1);
            break;
        }
    }
}

map.on('click', function(e) {
    addMarker(e.latlng.lat, e.latlng.lng);
});

map.on('popupopen', function(e) {
    var marker = e.popup._source;
    var messageInput = document.getElementById('messageInput');
    messageInput.addEventListener('input', function() {
        marker.message = messageInput.value;
    });
    messageInput.addEventListener('blur', function() {
        marker.setPopupContent("<b>Latitud:</b> " + marker.getLatLng().lat + "<br><b>Longitud:</b> " + marker.getLatLng().lng + "<br><input type='text' id='messageInput' value='" + marker.message + "'><br><button onclick='removeMarker(" + marker.id + ")'>Eliminar</button>");
    });
});