
function init() {
    var resultDiv = document.getElementById('tags');
    var input1 = document.getElementById('inputNumber1');
    var input2 = document.getElementById('inputNumber2');
    var result = 0;
    function addFunc(){ 
        result = Number(input1.value) + Number(input2.value);
    }
    function subFunc(){ 
        result = Number(input1.value) - Number(input2.value);
    }
    function divFunc(){ 
        result = Number(input1.value) / Number(input2.value);
    }
    function mulFunc(){ 
        result = Number(input1.value) * Number(input2.value);
    }
    function resultFunc(){ 
        resultDiv.innerHTML = result;
    }
    document.getElementById('add').onclick = addFunc;
    document.getElementById('sub').onclick = subFunc;
    document.getElementById('div').onclick = divFunc;
    document.getElementById('mul').onclick = mulFunc;
    document.getElementById('result').onclick = resultFunc;
}

window.onload = init;