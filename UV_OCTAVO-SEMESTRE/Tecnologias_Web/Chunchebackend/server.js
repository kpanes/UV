const express = require('express');
const app = express();
const port = 8080;

app.use(express.json());

app.post('/distance', (req, res) => {
  const { distance } = req.body;

  // Aquí puedes realizar la acción que desees con los datos recibidos
  // Por ejemplo, imprimirlos en la consola
  console.log('Distancia recibida:', distance);

  // Puedes enviar una respuesta al cliente si lo deseas
  res.send('Datos recibidos correctamente');
});

app.listen(port, () => {
  console.log(`Backend escuchando en http://localhost:${port}`);
});