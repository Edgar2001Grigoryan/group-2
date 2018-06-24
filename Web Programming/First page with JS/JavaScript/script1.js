window.onload = init;

function init() {

    document.getElementById('checkbox1').onclick = checkCheckboxStatus1;
    document.getElementById('checkbox2').onclick = checkCheckboxStatus2;
    document.getElementById('button1').onclick = saveData;


    function checkCheckboxStatus1() {
        var checkbox2 = document.getElementById('checkbox2')
        if (checkbox2.checked) {
            checkbox2.checked = false;
        }
      
    }

    function checkCheckboxStatus2() {
        var checkbox1 = document.getElementById('checkbox1')
        if (checkbox1.checked) {
            checkbox1.checked = false;
        }
      
    }

    function saveData() {
        name = document.getElementById('name').value;
        surname = document.getElementById('surname').value;
        if (checkbox1.checked) {
            gender = "Male";
        }
        if (checkbox2.checked) {
            gender = "Female";
        }
        window.localStorage.setItem("name", name);
        window.localStorage.setItem("surname", surname);
        window.localStorage.setItem("gender", gender);    
    }
}

