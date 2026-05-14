function showRegister() {
  document.querySelector(".login").classList.add("hidden");
  document.querySelector(".register").classList.remove("hidden");
}

function showLogin() {
  document.querySelector(".register").classList.add("hidden");
  document.querySelector(".login").classList.remove("hidden");
}


// PASSWORD SHOW/HIDE
function togglePass(id) {
  const input = document.getElementById(id);
  input.type = input.type === "password" ? "text" : "password";
}


// REGISTER
async function register() {
  const username = document.getElementById("register-username").value;
  const email = document.getElementById("register-email").value;
  const password = document.getElementById("register-password").value;

  const res = await fetch("http://localhost:3000/register", {
    method: "POST",
    headers: {"Content-Type":"application/json"},
    body: JSON.stringify({ username, email, password })
  });

  if (res.ok) {
    alert("Kayıt başarılı");
    showLogin();
  } else {
    alert("Hata");
  }
}


// LOGIN
async function login() {
  const username = document.getElementById("login-username").value;
  const password = document.getElementById("login-password").value;

  const res = await fetch("http://localhost:3000/login", {
    method: "POST",
    headers: {"Content-Type":"application/json"},
    body: JSON.stringify({ username, password })
  });

  if (res.ok) {
    alert("Giriş başarılı");
    window.location.href = "dashboard.html";
  } else {
    alert("Hatalı giriş");
  }
}