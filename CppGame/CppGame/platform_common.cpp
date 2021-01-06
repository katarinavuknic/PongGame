struct Button_State {
	bool is_down;
	bool is_changed;
};

enum {
	BUTTON_DOWN,
	BUTTON_UP,
	BUTTON_W,
	BUTTON_S,
	BUTTON_LEFT,
	BUTTON_RIGHT,
	BUTTON_ENTER,
	BUTTON_COUNT

};

struct Input {
	Button_State buttons[BUTTON_COUNT];
};