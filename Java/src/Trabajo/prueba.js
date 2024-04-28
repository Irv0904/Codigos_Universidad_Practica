var myHeaders = new Headers();
myHeaders.append("Authorization", "Basic c29wb3J0ZV9vdm5pYm90QG92bmljb20uY29tOk9WTklCT1QyMDIwKm92");

var requestOptions = {
  method: 'GET',
  headers: myHeaders,
  redirect: 'follow'
};

// URLs de los endpoints
const sla = 'https://api.mspmanager.com/odata/ticketslas';
const entry = 'https://api.mspmanager.com/odata/tickettimeentriesview';

// Realizar ambas solicitudes usando Promise.all
Promise.all([
  fetch(sla, requestOptions).then(response => response.json()),
  fetch(entry, requestOptions).then(response => response.json())
])
  .then(results => {
    const resultSla = results[0];
    const resultEntry = results[1];
    const s =resultSla;
    const e = resultEntry;
    calculo(s,e)
    //console.log('Resultado del primer endpoint:', resultSla);
    //console.log('Resultado del segundo endpoint:', resultEntry);

    // Realizar operaciones con ambos resultados aqui

    // Acceder al elemento HTML y mostrar los resultados
    let div = document.getElementById('arrays');
    

    /*div.innerHTML = `
        Resultado del primer endpoint: ${JSON.stringify(resultSla)}<br>
        Resultado del segundo endpoint: ${JSON.stringify(resultEntry)}
    `;*/
  })
  .catch(error => console.error('Error al realizar las solicitudes:', error));


  function calculo(resultSla,resultEntry)
   {

   //const fechaString = "2023-12-01T00:00:00Z";
   const fechaInicio = Date.parse("2023-12-01T00:00:00Z");
   const fechaFinal = Date.parse("2023-12-31T23:59:59Z");
   //console.log(fechaEntero);
    let div = document.getElementById('arrays');
    let d = ''
    resultSla.value.forEach(item => {
        let datosTiempo= item.CreatedDate;
        const fechaSla = Date.parse(datosTiempo);
        if(fechaSla > fechaInicio && fechaFinal > fechaSla)
        {
        let jsonString = JSON.stringify(item);
        console.log(resultSla);
        d+= '<div style=¨border: 2px solid red; margin: 2px¨><p>'+ jsonString +'</p>'
        }
      });
      div.innerHTML = d;
   }