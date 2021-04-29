modded class PlayerBase // modded keyword for modding existing class
{
	override void OnJumpStart() // ovverriding existing function
	{
		super.OnJumpStart();	// call the original jump function so we don't break stuff
		Print("OnJumpStart test log!");	// our modded print
	}
}