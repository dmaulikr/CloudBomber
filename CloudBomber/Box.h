/* Copyright (c) 2012 Scott Lembcke and Howling Moon Software
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#import "ObjectiveChipmunk.h"
#import "cocos2d.h"

// Implementing <ChipmunkObject> means that you can add this
// object to a space with a single [space add:missile] call.
// All you need to do is implement the chipmunkObjects method.
@interface Box : NSObject <ChipmunkObject>

@property(nonatomic, assign) CGPoint lookAt;

@property(nonatomic, retain) ChipmunkBody *body;
@property(nonatomic, retain) ChipmunkShape *shape;
@property(nonatomic, retain) CCPhysicsSprite *sprite;

@property(nonatomic, retain) NSArray *chipmunkObjects;

-(void)makeUpset;
-(void)makeHappy;

@end
