#pragma once
class IRobotBuilder {
public:
	virtual void fn_set_model_name() = 0;
	virtual void fn_set_max_vel() = 0;
	virtual void fn_set_max_angle() = 0;
	virtual void fn_set_min_vel() = 0;
	virtual void fn_set_min_angle() = 0;
	virtual Robot* fn_get_robot() = 0;
};
