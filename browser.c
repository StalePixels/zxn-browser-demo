#pragma output REGISTER_SP = 0xBFE0

#include <arch/zxn.h>
#include <arch/zxn/esxdos.h>
#include <intrinsic.h>
#include <stdio.h>

int main()
{
	unsigned char result;
	
	unsigned char filetypes[] = "\x03" "MD:" "\xff";
	unsigned char os_help[] = "Help blah blah";
	unsigned char dst_sfn[12];	
	unsigned char dst_lfn[137];	

	intrinsic_di();

	result = esx_ide_browser(ESX_BROWSERCAP_NONE, filetypes , os_help, dst_sfn, dst_lfn);
	
	printf("Result: %u, sfn: %s\n", result, dst_sfn);
	printf("lfn: %s", dst_lfn);
	
	for (;;);
	
	return 0;
}
