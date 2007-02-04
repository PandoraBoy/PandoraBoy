//
//  PandoraControl.h
//  PandoraBoy
//
//  Created by Aaron Rolett on 8/28/06.
//  Copyright 2006 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PandoraControl : NSObject {
  id webNetscapePlugin; 
  bool controlDisabled; 
}

+ (PandoraControl*) sharedController; 

- (void) setControlDisabled; 
- (void) setControlEnabled; 

- (void) setWebPlugin: (id)webPlugin; 

- (bool) sendKeyPress: (int)keyCode withModifiers:(int)modiFiers; 
- (bool) sendKeyPress: (int)keyCode; 

- (void) nextSong; 
- (void) playPause;
- (void) likeSong; 
- (void) dislikeSong; 
- (void) raiseVolume; 
- (void) lowerVolume;
- (void) fullVolume;
- (void) mute; 
@end
