/*
 * Copyright (c) 2014 Antoine Rousseau <antoine@metalu.net>
 * BSD Simplified License, see the file "LICENSE.txt" in this distribution.
 * See https://github.com/Ant1r/ofxPof for documentation and updates.
 */
#pragma once

#include "pofBase.h"

class pofTexture: public pofBase {
	public:
		pofTexture(t_class *Class, t_symbol *_name):pofBase(Class),name(_name) {
		}
		virtual ~pofTexture() {
		}
		
		virtual void draw();
		virtual void postdraw(); // called after objects bellow have been drawn

		static void setup(void);
		
		t_symbol *name;
};



