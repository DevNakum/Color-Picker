function randomDirection()
{
    let colorDirection = ["to right","to left bottom","to left top","to bottom","to top","to right bottom","to right top","to left"];
    return colorDirection[Math.floor(Math.random() * colorDirection.length)];;
}
function change(){    
    let fcolor = document.getElementById('fcolor').value;
    let scolor = document.getElementById('scolor').value;
    
    console.log(fcolor);
    console.log(scolor);

    colorDirection = ["to right","to left bottom","to left top","to bottom","to top","to right bottom","to right top","to left"];

    randomGen = colorDirection[Math.floor(Math.random() * colorDirection.length)];

    let bid = document.getElementById('bid');
    bid.style.background = 'linear-gradient('+randomDirection()+','+fcolor+','+scolor+')';
}

window.onload = function(){
    change();
}