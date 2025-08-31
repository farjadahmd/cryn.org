/* ===== GOOGLE FONTS ===== */
body, html {
    margin: 0;
    padding: 0;
    font-family: 'Roboto', sans-serif;
    scroll-behavior: smooth;
}

/* ===== NAVBAR ===== */
nav {
    position: fixed;
    width: 100%;
    display: flex;
    justify-content: space-between;
    align-items: center;
    padding: 1rem 5%;
    background: rgba(0,0,0,0.7);
    color: white;
    z-index: 100;
}

nav .logo {
    font-size: 2rem;
    font-weight: bold;
}

nav .nav-links {
    list-style: none;
    display: flex;
    gap: 2rem;
}

nav .nav-links li a {
    color: white;
    text-decoration: none;
    font-weight: 500;
    transition: color 0.3s;
}

nav .nav-links li a:hover {
    color: #00ff99;
}

/* BURGER MENU */
.burger {
    display: none;
    cursor: pointer;
    flex-direction: column;
    gap: 5px;
}

.burger div {
    width: 25px;
    height: 3px;
    background: white;
    transition: all 0.3s;
}

/* ===== HERO ===== */
.hero {
    height: 100vh;
    background: url('images/hero.jpg') center/cover no-repeat fixed;
    display: flex;
    align-items: center;
    justify-content: center;
    text-align: center;
    color: white;
}

.hero-text h1 {
    font-size: 3rem;
    margin-bottom: 1rem;
    animation: fadeIn 2s ease-in-out;
}

.hero-text p {
    font-size: 1.5rem;
    margin-bottom: 2rem;
}

.btn {
    text-decoration: none;
    padding: 0.8rem 2rem;
    background: #00ff99;
    color: black;
    border-radius: 30px;
    font-weight: bold;
    transition: transform 0.3s, background 0.3s;
}

.btn:hover {
    transform: scale(1.1);
    background: #00cc77;
}

/* ===== SECTIONS ===== */
.section {
    padding: 5rem 10%;
    opacity: 0;
    transform: translateY(50px);
    transition: all 0.8s ease-out;
}

.section.active {
    opacity: 1;
    transform: translateY(0);
}

/* PROJECT CARDS */
.projects-container {
    display: flex;
    flex-wrap: wrap;
    gap: 2rem;
    justify-content: center;
}

.project-card {
    background: #f0f0f0;
    border-radius: 20px;
    overflow: hidden;
    width: 300px;
    box-shadow: 0 5px 20px rgba(0,0,0,0.2);
    transition: transform 0.3s;
}

.project-card img {
    width: 100%;
    height: 200px;
    object-fit: cover;
}

.project-card h3 {
    margin: 1rem;
}

.project-card p {
    margin: 0 1rem 1rem 1rem;
}

.project-card:hover {
    transform: scale(1.05);
}

/* VIDEO CONTAINER */
.video-container {
    display: flex;
    gap: 2rem;
    flex-wrap: wrap;
    justify-content: center;
}

.video-container iframe {
    width: 400px;
    height: 225px;
    border-radius: 15px;
}

/* RESOURCES */
.resources-container {
    display: flex;
    gap: 2rem;
    flex-wrap: wrap;
}

.resource-card {
    display: block;
    padding: 2rem;
    background: #00ff99;
    border-radius: 20px;
    text-decoration: none;
    color: black;
    font-weight: bold;
    flex: 1;
    text-align: center;
    transition: transform 0.3s;
}

.resource-card:hover {
    transform: scale(1.05);
}

/* CONTACT FORM */
form {
    display: flex;
    flex-direction: column;
    gap: 1rem;
    max-width: 500px;
    margin: auto;
}

form input, form textarea {
    padding: 1rem;
    border-radius: 10px;
    border: 1px solid #ccc;
    font-size: 1rem;
}

form button {
    cursor: pointer;
}

/* SOCIAL LINKS */
.social-links {
    text-align: center;
    margin-top: 2rem;
}

.social-links a {
    margin: 0 1rem;
    color: #00ff99;
    text-decoration: none;
}

/* ===== MEDIA QUERIES ===== */
@media(max-width: 768px) {
    .nav-links {
        position: absolute;
        right: 0;
        height: 100vh;
        top: 0;
        background: rgba(0,0,0,0.9);
        flex-direction: column;
        align-items: center;
        width: 50%;
        transform: translateX(100%);
        transition: transform 0.5s ease-in;
        gap: 2rem;
        padding-top: 10rem;
    }

    .nav-links.nav-active {
        transform: translateX(0);
    }

    .burger {
        display: flex;
    }
}
