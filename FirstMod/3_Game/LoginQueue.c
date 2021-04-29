modded class LoginQueueBase
{
	override void SetPosition(int position)
	{
		Print("Testing SetPosition override");
		super.SetPosition(position);
	}
}