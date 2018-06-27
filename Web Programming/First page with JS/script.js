window.onload = init;

function init() {
    count = 1;
    if (window.sessionStorage.getItem("name") == null) {
        document.getElementById('modal').style.display = "flex";
    } else {
        getData();
    }
   
    function getData() {
        if (window.sessionStorage.getItem("gender") == "Male") {
            document.getElementById('toph1').innerHTML = "Hi Mr. " 
            + window.sessionStorage.getItem("name") + " " + window.sessionStorage.getItem("surname");
        }
        if (window.sessionStorage.getItem("gender") == "Female") {
            document.getElementById('toph1').innerHTML = "Hi Mrs. " 
            + window.sessionStorage.getItem("name") + " " + window.sessionStorage.getItem("surname");
        }    

        countn = 1;
        while (window.sessionStorage.getItem("address" + String(countn))) {
            add(10);
            countn++;
        }
    }

    document.getElementById('add').onclick = add;
    document.getElementById('button1').onclick = saveData;

    function add(x) {
        var node = document.createElement("div");
        node.setAttribute('id', String(count));
        document.getElementById("secondDiv").appendChild(node);
        addContent(x);
        count++;
    }

    function addContent(x) {
        if (x != 10) {
            window.sessionStorage.setItem("address" + String(count), document.getElementById('address').value);
        }
        var node = document.createElement("h2");
        if (x == 10) {
            var textnode = document.createTextNode("Address: " + window.sessionStorage.getItem("address" + String(countn)));
        } else {
            var textnode = document.createTextNode("Address: " + document.getElementById('address').value);
        }
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);


        if (x != 10) {
            window.sessionStorage.setItem("city" + String(count), document.getElementById('city').value);
        }
        var node = document.createElement("h2");
        if (x == 10) {
            var textnode = document.createTextNode("City: " + window.sessionStorage.getItem("city" + String(countn)));
        } else {
            var textnode = document.createTextNode("City: " + document.getElementById('city').value);
        }        
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);


        if (x != 10) {
            window.sessionStorage.setItem("country" + String(count), document.getElementById('country').value);
        }
        var node = document.createElement("h2");
        if (x == 10) {
            var textnode = document.createTextNode("Country: " + window.sessionStorage.getItem("country" + String(countn)));
        } else {
            var textnode = document.createTextNode("Country: " + document.getElementById('country').value);
        }
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);


        if (x != 10) {
            window.sessionStorage.setItem("phone" + String(count), document.getElementById('phone').value);
        }
        var node = document.createElement("h2");
        if (x == 10) {
            var textnode = document.createTextNode("Phone: " + window.sessionStorage.getItem("phone" + String(countn)));
        } else {
            var textnode = document.createTextNode("Phone: " + document.getElementById('phone').value);
        }        
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);


        if (x != 10) {
            window.sessionStorage.setItem("name" + String(count), document.getElementById('name').value);
        }
        var node = document.createElement("h2");
        if (x == 10) {
            var textnode = document.createTextNode("Name: " + window.sessionStorage.getItem("name" + String(countn)));
        } else {
            var textnode = document.createTextNode("Name: " + document.getElementById('name').value);
        }        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);

        
        if (x != 10) {
            window.sessionStorage.setItem("surname" + String(count), document.getElementById('surname').value);
        }
        var node = document.createElement("h2");
        if (x == 10) {
            var textnode = document.createTextNode("Surname: " + window.sessionStorage.getItem("surname" + String(countn)));
        } else {
            var textnode = document.createTextNode("Surname: " + document.getElementById('surname').value);
        }        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);
    }

    function saveData() {
        name = document.getElementById('name1').value;
        surname = document.getElementById('surname1').value;
        gender = null;
        if (checkbox1.checked) {
            gender = "Male";
        }
        if (checkbox2.checked) {
            gender = "Female";
        }
        window.sessionStorage.setItem("name", name);
        window.sessionStorage.setItem("surname", surname);
        window.sessionStorage.setItem("gender", gender);    
        document.getElementById('modal').style.display = "none";
        getData();
    }

    window.onclick = function(event) {
        if (event.target == modal) {
            modal.style.display = "none";
        }
    }
}
