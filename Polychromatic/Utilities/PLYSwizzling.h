//
//  PLYSwizzling.h
//  Polychromatic
//
//  Created by Kolin Krewinkel on 3/9/14.
//  Copyright (c) 2015 Kolin Krewinkel. All rights reserved.
//

#include <objc/runtime.h>

IMP PLYSwizzle(Class originalClass, SEL originalSelector, Class posingClass, SEL replacementSelector, BOOL instanceMethod);

