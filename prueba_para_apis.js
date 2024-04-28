
var myHeaders = new Headers();
myHeaders.append("Authorization", "Basic c29wb3J0ZV9vdm5pYm90QG92bmljb20uY29tOk9WTklCT1QyMDIwKm92");

var requestOptions = {
  method: 'GET',
  headers: myHeaders,
  redirect: 'follow'
};

// URLs de los endpoints de SLA, EntryTimeView, TicketCustomField,Ticket general
const apiSla = 'https://api.mspmanager.com/odata/ticketslas?%24top=19';
const apiEntry = 'https://api.mspmanager.com/odata/tickettimeentriesview?%24top=19';
//const apiCustomField = 'https://api.mspmanager.com/odata/ticketscustomfields?%24top=1';
//const apiTicket = 'https://api.mspmanager.com/odata/tickets';
// Realizar ambas solicitudes usando Promise.all
Promise.all([
  fetch(apiSla, requestOptions).then(response => response.json()),
  fetch(apiEntry, requestOptions).then(response => response.json()),
  //fetch(apiCustomField, requestOptions).then(response => response.json()),
  //fetch(apiTicket, requestOptions).then(response => response.json())

])
  .then(results => {
    const resultadoSla = results[0];
    const resultadoEntry = results[1];
    //const resultadoCustomField = results[2];
    //const resultadoTicket = results[3];
    const rs =resultadoSla;
    const re =resultadoEntry;
    //const rc =resultadoCustomField;

    datos(rs,re,/* rc */);


    // console.log('Resultado del primer endpoint:', resultadoSla);
    // console.log('Resultado del segundo endpoint:', resultadoEntry);
    // console.log('Resultado del tercer endpoint:', resultadoCustomField);


    //console.log('Resultado del cuarto endpoint:', resultadoTicket);

    // Realizar operaciones con ambos resultados aquí

    // Acceder al elemento HTML y mostrar los resultados
    //let div = document.getElementById('json');
    // div.innerHTML = `
    //   Resultado del primer endpoint: ${JSON.stringify(result1, null, 2)}<br>
    //   Resultado del segundo endpoint: ${JSON.stringify(result2, null, 2)}
    // `;
  })
  .catch(error => console.error('Error al realizar las solicitudes:', error));


  function datos(/* resultadoCustomField, */resultadoEntry,resultadoSla) {
    const resultadoCombinado = {};
    let vara = 0;
    let va = 0;
    resultadoSla.value.forEach(itemSla => {
      vara = vara+1;
      resultadoEntry.value.forEach(itemEntry =>{
        va = va+1;
        // resultadoCustomField.value.forEach(itemCustomField =>{
          if (/* itemSla.TicketId != itemCustomField.TicketId &&  */itemSla.TicketId != itemEntry.TicketId) {
            console.log("Son diferentes");
            
          } else {
            
            resultadoCombinado[itemSla.TicketId] = {
              itemSla,
              itemEntry
              //itemCustomField
            };
            console.log(resultadoCombinado);
            console.log("Son iguales")
          }
        //})
      })
    })
    console.log(vara, va)
      let div = document.getElementById('arrays');
    div.innerHTML = `
      Resultado del primer endpoint: ${JSON.stringify(resultadoCombinado)}
    `;
  }

 