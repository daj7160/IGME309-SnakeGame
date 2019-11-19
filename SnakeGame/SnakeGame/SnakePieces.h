#pragma once
class SnakePieces
{
	//Default creation
	SnakePieces();

	//Create piece at specific x and y value
	SnakePieces(float x, float y);

	~SnakePieces();


	//X and Y values to pass
	float pieceX;

	float pieceY;
};