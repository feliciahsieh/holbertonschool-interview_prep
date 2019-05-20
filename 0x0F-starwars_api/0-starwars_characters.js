#!/usr/bin/node

let args = process.argv.slice(2);
if (args[0] === undefined) {
  // No argument
  console.log('Usage: ./0-starwars_characters [movie_id (1-7)]')
  process.exit();
} else if (args.length !== 1) {
  process.exit();
}

let url = 'http://swapi.co/api/films/' + args[0];
let request = require('request');
request(url, function (error, response, body) {
  if (error) {
    // Handle error if one occurred
  }
  if (response.statusCode === 200) {
    let obj = JSON.parse(body);
    let characters = obj['characters'];
    characters.forEach(function (element2) {
      request(element2, function (error2, response2, body2) {
        if (error2) { // Handle error if one occurred
        }
        if (response2.statusCode === 200) {
          let obj2 = JSON.parse(body2);
          console.log(obj2['name']);
        }
      });
    });
  }
});
