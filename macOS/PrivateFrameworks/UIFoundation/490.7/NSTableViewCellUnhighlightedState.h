//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface NSTableViewCellUnhighlightedState : NSObject
{
    BOOL _opaque;
    BOOL _highlighted;
    NSColor *_backgroundColor;
}

@property(retain) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property BOOL highlighted; // @synthesize highlighted=_highlighted;
@property BOOL opaque; // @synthesize opaque=_opaque;
- (void)dealloc;

@end

