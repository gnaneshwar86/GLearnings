function fetchdata(){
    var cityname=document.querySelector("#city").value;
    var url="https://api.openweathermap.org/data/2.5/weather?q=${cityname}&appid=e4c25f07cd93065c8029a7880d083110";
    fetch(url)
        .then((response) => response.json())
        .then((data) =>renderWeather(data));
        console.log(data);
}
function renderWeather(data){
    var container=document.querySelector('#weather-reports');
    
    var city=document.createElement('p');
    city.textContent=data.name;
    container.appendChild(city);
    
    var temp1=document.createElement('p');
    temp1.textContent="Weather:" + data.weather.main;
    container.appendChild(temp1);
    
    var temp2=document.createElement('p');
    temp2.textContent="Temperature:" + data.main.temp;
    container.appendChild(temp2);
    
    var temp3=document.createElement('p');q
    temp3.textContent="Weather Description:" + data.weather.description;
    container.appendChild(temp3);

}