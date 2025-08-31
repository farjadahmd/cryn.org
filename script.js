// NAVBAR TOGGLE
const burger = document.querySelector('.burger');
const nav = document.querySelector('.nav-links');
burger.addEventListener('click', () => {
    nav.classList.toggle('nav-active');
    burger.classList.toggle('toggle');
});

// SMOOTH SCROLL
document.querySelectorAll('.nav-links a').forEach(link => {
    link.addEventListener('click', e => {
        e.preventDefault();
        const target = document.getElementById(link.getAttribute('href').substring(1));
        window.scrollTo({ top: target.offsetTop - 70, behavior: 'smooth' });
        if(nav.classList.contains('nav-active')) {
            nav.classList.remove('nav-active');
            burger.classList.remove('toggle');
        }
    });
});

// SCROLL REVEAL
const sections = document.querySelectorAll('.section, .project-card');
window.addEventListener('scroll', () => {
    sections.forEach(section => {
        const top = section.getBoundingClientRect().top;
        if(top < window.innerHeight - 150) section.classList.add('active');
    });
});

// HERO TEXT TYPING
const heroText = document.querySelector('.hero-text h1');
let index = 0;
const text = heroText.innerText;
heroText.innerText = '';
const typeEffect = () => {
    if(index < text.length) {
        heroText.innerText += text.charAt(index);
        index++;
        setTimeout(typeEffect, 100);
    }
};
window.addEventListener('load', typeEffect);

// HERO PARALLAX
const hero = document.querySelector('.hero');
window.addEventListener('scroll', () => {
    hero.style.backgroundPositionY = window.scrollY * 0.5 + "px";
});
