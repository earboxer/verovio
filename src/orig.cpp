/////////////////////////////////////////////////////////////////////////////
// Name:        orig.cpp
// Author:      Laurent Pugin
// Created:     2018
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include "orig.h"

//----------------------------------------------------------------------------

#include <assert.h>

//----------------------------------------------------------------------------

#include "vrv.h"

namespace vrv {

//----------------------------------------------------------------------------
// Orig
//----------------------------------------------------------------------------

Orig::Orig() : EditorialElement("orig-"), AttSource()
{
    RegisterAttClass(ATT_SOURCE);

    Reset();
}

Orig::~Orig() {}

void Orig::Reset()
{
    EditorialElement::Reset();
    ResetSource();
}

//----------------------------------------------------------------------------
// functor methods
//----------------------------------------------------------------------------

} // namespace vrv
