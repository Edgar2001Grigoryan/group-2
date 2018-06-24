window.onload = init;

function init() {
    if (window.localStorage.getItem("gender") == "Male") {
        document.getElementById('toph1').innerHTML = "Hi Mr. " 
        + window.localStorage.getItem("name") + " " + window.localStorage.getItem("surname");
    }
    if (window.localStorage.getItem("gender") == "Female") {
        document.getElementById('toph1').innerHTML = "Hi Ms. " 
        + window.localStorage.getItem("name") + " " + window.localStorage.getItem("surname");
    }

    document.getElementById('add').onclick = add;
    var count = 1;

    function add() {
        var node = document.createElement("div");
        node.setAttribute('id', String(count));
        document.getElementById("secondDiv").appendChild(node);
        addContent();
        count++;
    }

    function addContent() {

        var node = document.createElement("h2");
        var textnode = document.createTextNode("Address: " + document.getElementById('address').value);
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);

        var node = document.createElement("h2");
        var textnode = document.createTextNode("City: " + document.getElementById('city').value);
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);

        var node = document.createElement("h2");
        var textnode = document.createTextNode("Country: " + document.getElementById('country').value);
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);

        var node = document.createElement("h2");
        var textnode = document.createTextNode("Phone: " + document.getElementById('phone').value);
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);

        var node = document.createElement("h2");
        var textnode = document.createTextNode("Name: " + document.getElementById('name').value);
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);

        var node = document.createElement("h2");
        var textnode = document.createTextNode("Surname: " + document.getElementById('surname').value);
        node.appendChild(textnode);
        document.getElementById(String(count)).appendChild(node);
    }
}
