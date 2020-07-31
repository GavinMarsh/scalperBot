# scalperBot
Telegram Bot coded in Java

## Heroku deployment
#### Install dependencies on heroku server 
https://devcenter.heroku.com/articles/exec

Open a bash terminal and log into heroku account

`$heroku login`

Install nodejs plugin on heroku server

`$heroku plugins:install nodejs`

Install npm plugin

`$heroku plugins:install npm`

Install Heroku Exec and push to repo master

`$git commit -m "Heroku Exec" --allow-empty`

`$git push heroku master`

Now SSH into your app terminal    

`$heroku ps:exec --dyno=worker.1`

 



