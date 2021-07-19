const express = require('express')

const App = express()

App.get('/', (req, res) => {
    res.send('oi beda client')  
 } )

App.listen(3000, () => {
    console.log('hello')
})

