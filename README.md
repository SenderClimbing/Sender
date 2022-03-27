<h1 align="center">
    <img src="https://user-images.githubusercontent.com/76081718/160261328-dc5d2e72-8bfc-4e05-a4d7-8912d8c2206e.png" alt="Logo">
</h1>

<!-- Old Logo: -->
<!-- ![b4a85973c59f481e8bd48dcaf0dac485](https://user-images.githubusercontent.com/76081718/160248964-1b7625cd-53ce-464f-b148-f5cf2bd39a43.png) -->

<!-- Mountains Logo - With Background: -->
<!-- ![85242ec97c984381b2d662cd64ab9652](https://user-images.githubusercontent.com/76081718/160261328-dc5d2e72-8bfc-4e05-a4d7-8912d8c2206e.png) -->

<!-- Mountains Logo - No Background -->
<!-- ![aef07a7d15144c8690733645916693ca](https://user-images.githubusercontent.com/76081718/160261370-3c6ebc28-7682-4c31-81eb-b10bb53b6f8c.png) -->


## Note!

This project is by no means done, It has a terminal based version if you are very intrigued and wish to use it. In the future I am planning to add a better front end. It will include a GUI app(Made in C++) and a Web version (Made with JS, HTML, and CSS). Thanks for your understanding, and I will keep you updated in the future
<h1 align="center">Sender</h1>
<p align="center">Log all your climbs in one place, and get feedback on how you are doing!</p>

<br>
<p align="center">
  <a href="#Installation">Installation</a> •
  <a href="#Inspiration">Inspiration</a> •
  <a href="#Functionality">Functionality</a> •
  <a href="#build-process">Build Process</a> •
  <a href="#Challenges">Challenges</a> •
  <a href="#whats-next">Whats next?</a> •
  <a href="#what-i-learnt">What I learnt</a> •
  <a href="#Hackathon">Hackathon</a>
</p>


### Installation
Step 1: Clone the Repository with: ```git clone https://github.com/DragonDev07/Sender ```

Step 2: cd to the Repository in terminal. This can be done with: ```cd Sender```

Step 3: Compile the code and run. Please Make sure that you have gcc/g++ installed. ```g++ src/main.cpp && ./a.out```

### Inspiration
My Inspiration for this project came from my love of Rock Climbing. When I was brainstoming ideas I randomly thought of this, and havent seen many things that can do this for you, and when I have, they didnt entirely do it how I wanted it to work. Thus, I decided to choose this idea for this hackathon.

### Functionality
Sender will take an input from you of all the climbs that you have done that day, and write them to a file. The hope is, that overtime it will build a fairly large database of all the climbs you have done. Once you are done entering it will scan the database to check if you were able to achieve any new hardest climbs, and inspire you to keep training.

This is what Sender is intended to do, not what it currently does, as I ran out of time to be able to finish it. Also, Sender only works for boulders at the moment, but I plan to add Sport Climbing support in the future (Top Rope, Lead CLimb).

### Build Process
The basis for sender was built in C++ to work in terminal, so that I could get a really rough draft of what it can do. After that I started adding more functionality, Including the writing to files so that it actually remembers your climbs that you have done previously, and calculating the output, for what new climbs that you have done.
 
### Challenges
Originally, when I had first made the idea for the project, I had thought that I could link the backend(c++) with the frontend(html). I later learnt by asking one of the coaches on the discord, that this would be very hard to achieve. When I learnt this I started thinking of other ways that I could fix this problem, such as making a GUI application in C++. This was eventually the idea that I settled for, even though I was not able to complete it in time for the deadline.

### Accomplishments
During the given hackathon period, I was able to accomplish a "backend" / terminal based version of my initial idea. This backend version is able to write to the "Database" of all climbs that you have ever done, and it is also able read said database and give you updates if you have done a new hardest climb.

### Whats next?
I plan to consistently (hopefully, with school and all) keep this repository maintained. I also hope to add two different types of front end versions to this repository too. One of the version will be a GUI application made in C++, and the other version will be a github page(website) made in HTML, JS, and CSS. The final thing that I wish to add to this project would be support for Sport Climbing(Top Rope, and Lead) grades.

### What I learnt
During the hackathon time period I was also able to learn a number of different things, which include how to setup github pages (for a website) and how to write HTML, JS, and CSS "code" to make a simple website.

### Hackathon
This project was originally made for Treasure Hacks 2.0 Hackathon. :)
