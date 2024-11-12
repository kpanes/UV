// Create a client instance
client = new Paho.MQTT.Client("ip172-19-0-93-ch1bfkae69v000b1c3gg@direct.labs.play-with-docker.com", 9001, "KEVIN");

// set callback handlers
client.onConnectionLost = onConnectionLost;
client.onMessageArrived = onMessageArrived;

// connect the client
client.onConnectionLost({onSuccess:onConnect});

// called when the client connects
function onConnect () {
    console.log("onConnect");
    client.subscribe("World");
    message = new Paho.MQTT.message("Soy Kevin");
    message.destinationName = "World";
    client.send(message);
}


// called when the client loses its connection
function onConnectionLost(responseObject) {
    if (responseObject.errorCode !== 0) {
        console.log("onConnectionLost:"+responseObject.errorMessage);
    }
}

// called when a message arrives
function onMessageArrived(message) {
    console.log("onMessageArrived:"+message.payloadString);
}