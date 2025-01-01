import express from 'express';
// const mongoose = require('mongoose');
// const cors = require('cors');

const app= express();

app.get('/',(req,res)=>{
    res.send('Hello from Express Server');
})

app.get('/jokes',(req,res)=>{
const jokes=[
    {
        id:1,
        title:'a joke',
        content: 'Hello from'
    },{
        id:2,
        title:'another joke',
        content: 'World'
    },
    {
        id:3,
        title:'a third joke',
        content: 'Node.js'
    }
];
res.send(jokes);
});

const port =process.env.PORT || 3000;

app.listen(port, () => console.log(`Server running on port ${port}`));

