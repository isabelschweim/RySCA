#include "eth.h"
#include "arp.h"
#include "ipv4.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>


int main ( int argc, char * argv[] )
{
  /* Mostrar mensaje de ayuda si el número de argumentos es incorrecto */
 
 /*
  char * myself = basename(argv[0]);
  if ((argc < 4) || (argc >5)) {
    printf("Uso: %s <iface> <tipo> <mac> [<long>]\n", myself);
    printf("       <iface>: Nombre de la interfaz Ethernet\n");
    printf("        <tipo>: Campo 'Tipo' de las tramas Ethernet\n");
    printf("         <mac>: Dirección MAC del servidor Ethernet\n");
    printf("        <long>: Longitud de los datos enviados al servidor Ethernet\n");
    printf("                (%d bytes por defecto)\n", DEFAULT_PAYLOAD_LENGTH);
    exit(-1);
  }
  */
  /* Procesar los argumentos de la línea de comandos */
  char * iface_name = argv[1];

 // char* eth_type_str = argv[2]; // este es el tipo de trama ethernet, en nuestro caso debe de ser ARP ONLY
                                // 0x0806   // estos ya debe de estar por que asumimos que es solo arp y entonces  en la funcion arp_resolve a ethernet send tenemos que mandarle este tipo de numero
 
  char* ipsearch = argv[2]; // direccion ip que necesitamos encontrar. 
  
  ipv4_addr_t addr;  // defino donde voy a guardar la direccion ip, en formato addres no en formato texto. 
  
  char str[MAC_ADDR_SIZE]; 
  
  int ipv4_str_addr(char* ipsearch, ipv4_addr_t addr); // pasamos la ip de texto a formato ipv4 que nos dan en la asignatura. 
  
  mac_addr_t mac_addr; // aqui debe de guardar el MAC ADDRESS PEDIDIO.- Estaria inicialiazado a 0. 
 
    int arp_resolve (eth_iface_t * iface_name, ipv4_addr_t addr, mac_addr_t mac_addr);

   void mac_addr_str ( mac_addr_t addr, char str[] );  // aqui pasamos de formato MAC ADDRESS a texto. 
 
 // me lo guarda en str que tiene la longitud standar definida en el define. 

   
   printf("La direccion IP (%s) esta asociada a la direcccion MAC (%s):\n",
         ipsearch, str);





}

  
  
 




  
  
  
  
  
  
  
  
  
