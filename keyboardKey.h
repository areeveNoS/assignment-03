template<typename P>
class keyboardKey
{	
	private:
	public:
		P key;

		void keyboardKey::printToScreen();
};

template<typename P>
void keyboardKey<P>::printToScreen()
{
	P pressedKey;
	std::cout << "Enter something ";
	std::cin >> pressedKey;
	std::cout << "You pressed " << pressedKey << std::endl;
}
