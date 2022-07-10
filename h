const http = require("http");

const server = http.createServer((req, res) => {
  if (req.url === "/") {
    res.end("Welcome to our Homepage");
  }
  if (req.url === "/about") {
    res.end("Here is the about page");
  }

  res.end(`
  <h1>Opps!,</h1>
  <p>We can't to seem to find the page</p>
  <a href='/'>back home</a>
  `);
});

server.listen(5000);
