function updateText() {
  let delay = 60;

  let h1 = document.getElementById("wave-animated");

  h1.innerHTML = h1.textContent
    .split("")
    .map((letter) => {
      return `<span>` + letter + `</span>`;
    })
    .join("");

  Array.from(h1.children).forEach((span, index) => {
    setTimeout(() => {
      span.classList.add("wavy");
    }, index * delay + 200);
  });
}

window.onload = updateText;
