const millisecond = 1
      second = millisecond * 1000,
      minute = second * 60,
      hour = minute * 60,
      day = hour * 24;

let countDown = new Date('February 06, 2027 00:00:00').getTime(),
    x = setInterval(function() {    

      let now = new Date().getTime(),  
        distance = countDown - now; 

      //do something later when date is reached
      if (distance < 0) {
        clearInterval(x);
        // location.href="./index.html";
      }
        
        document.getElementById('days').innerText = Math.floor(distance / (day)),
        document.getElementById('hours').innerText = Math.floor((distance % (day)) / (hour)),
        document.getElementById('minutes').innerText = Math.floor((distance % (hour)) / (minute)),
        document.getElementById('seconds').innerText = Math.floor((distance % (minute)) / second),
        document.getElementById('milliseconds').innerText = Math.floor((distance % (second)) / millisecond);

    }, millisecond)