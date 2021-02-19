#pragma once
class objectData
{
public:
	objectData(void);
	~objectData(void);

	void setXpos(int x);
	void setYpos(int y);

	int getXpos();
	int getYpos();

private:
	int p_Xpos;
	int p_Ypos;
};

