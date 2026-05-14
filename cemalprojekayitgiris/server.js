const express = require("express");
const cors = require("cors");
const { Pool } = require("pg");

const app = express();
app.use(cors());
app.use(express.json());
app.use(express.static(__dirname));

const pool = new Pool({
  user: "postgres",
  host: "127.0.0.1",
  database: "myapp",
  password: "",
  port: 5432,
});

app.post("/register", async (req,res)=>{
  const {username,email,password}=req.body;
  await pool.query(
    "INSERT INTO users(username,email,password) VALUES($1,$2,$3)",
    [username,email,password]
  );
  res.send("ok");
});

app.post("/login", async (req,res)=>{
  const {username,password}=req.body;

  const r = await pool.query(
    "SELECT * FROM users WHERE username=$1",
    [username]
  );

  if(r.rows.length===0) return res.status(400).send("no");

  if(r.rows[0].password !== password)
    return res.status(400).send("wrong");

  res.send("ok");
});

app.listen(3000, ()=>console.log("http://localhost:3000"));