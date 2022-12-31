
// #include <ESP8266WiFi.h>

// //Parameters
// String request;
// char* ssid = "Wifi";
// char* password = "@01631916786@";


// //Objects
// WiFiServer server(80);

// void setup(){
// //Init Serial USB
// Serial.begin(115200);

// //Init ESPBrowser
// WiFi.begin(ssid, password);

// // Connect to Wifi network.
// while (WiFi.status() != WL_CONNECTED){
//   delay(500);
//   Serial.print(F("."));
// }
//   server.begin();
//   Serial.println();
//   Serial.println(WiFi.localIP());
//   server.begin();
// }

// void loop(){
// WiFiClient client = server.available();
//   if (!client) {
//     return;
//   }
 
//   // Wait until the client sends some data
//   Serial.println("new client");
//   while(!client.available()){
//     delay(1);
//   }
 
//   // Read the first line of the request
//   String request = client.readStringUntil('\r');
//   Serial.println(request);
//   client.flush();
//   webpage(client);//Return webpage
// }

// void webpage(WiFiClient client){/* function webpage */ 
// ////Send wbepage to client
//   client.println("HTTP/1.1 200 OK");
//   client.println("Content-Type: text/html");
//   client.println(""); //  do not forget this one
//   client.println("<!DOCTYPE HTML>");
//   client.println("<html>");
//   client.println("<head>");
//   client.println("<meta name='apple-mobile-web-app-capable' content='yes' />");
//   client.println("<meta name='apple-mobile-web-app-status-bar-style' content='black-translucent' />");
//   client.println("</head>");
//   client.println("<body>"); 
//   client.println("<hr/><hr>");
//   client.println("<h1 style='color : #3AAA35;'><center>  Yeasin Developer  </center></h1>");
//   client.println("<hr/><hr>");
//   client.println("<br><br>");
//   client.println("<br><br>");
  
//    client.println("</tr>");
//    client.println("</table>");
//    client.println("</center>");
//    client.println("</body></html>"); 
//    client.println();
//    delay(1);
// }






/*
 * Circuits4you.com
 * Get IP Address of ESP8266 in Arduino IDE
*/
#include <ESP8266WiFi.h>

  const char* wifiName = "Wifi";
  const char* wifiPass = "@01631916786@";
  
// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);
  delay(10);
  // We start by connecting to a WiFi network
  Serial.println();

  Serial.print("Connecting to ");
  Serial.println(wifiName);

  WiFi.begin(wifiName, wifiPass);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());   //You can get IP address assigned to ESP
}

// the loop function runs over and over again forever
void loop() {
}