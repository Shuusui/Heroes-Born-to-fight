#pragma once


#pragma region Internal Includes
#pragma endregion 

#pragma region External Includes
#pragma endregion 


namespace Heroes
{
	namespace Mainframe
	{
		class MainGameLoop
		{
		public:
			MainGameLoop(); 
			void InitGame();
		private: 
			void GameLoop();
			
		};
	}
}
