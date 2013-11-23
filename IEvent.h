//  ласс IEvent, действие, которое определ€ет происход€щее в течении хода
#pragma once

class IEvent
{
public:
	// ƒолжен был возвращать IEvent, но не смог.
	// —корее всего должен быть заменЄн конструктором
	virtual void execute() = 0;
	// ¬озвращает состо€ние(None позвол€ет двигатьс€ дальше)
	virtual const IEvent & get_action() const = 0;
};