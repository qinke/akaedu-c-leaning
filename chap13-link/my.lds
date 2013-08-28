/* Script for -z combreloc: combine and sort reloc sections */
ENTRY(_start)
SECTIONS
	. = 0x0
    .text           :
	{
    	*(.text) 
	} 
	.data           :	{	*(.data )     }
	.bss            :	{	*(.bss )    }
