document.addEventListener("DOMContentLoaded", function () {
  const wheel = document.querySelector(".wheel");
  const numberElement = document.getElementById("number");
  const spinButton = document.getElementById("spin-button");

  spinButton.addEventListener("click", spin);

  function spin() {
    const randomAngle = Math.floor(Math.random() * 360) + 3600;
    wheel.style.transition = "transform 3s ease-out";
    wheel.style.transform = `rotate(${randomAngle}deg)`;

    setTimeout(() => {
      const resultNumber = Math.floor((360 - randomAngle) / 9.73) % 37;
      numberElement.textContent = resultNumber;
      wheel.style.transition = "none";
      wheel.style.transform = `rotate(0deg)`;
    }, 3000);
  }
});
