void	Rainbow_Clothes_vTwo(void)
{
	memcpy((void *)(1482FFC), (void*)(offset)), 0x00000020);
	if (READU32(offset + 0x0482FFC) == 0x0888D818)
	{
		WRITEU32(offset + 0x0482FFC, 0x0888D638);
	}
	memcpy((void *)(1483000), (void*)(offset)), 0x00000020);
	if (READU32(offset + 0x0483000) == 0x0888D818)
	{
		WRITEU32(offset + 0x0483000, 0x0888D638);
	}
	memcpy((void *)(1483004), (void*)(offset)), 0x00000020);
	if (READU32(offset + 0x0483004) == 0x0888D818)
	{
		WRITEU32(offset + 0x0483004, 0x0888D638);
		offset = 0;
		data = 0;
	}
}


