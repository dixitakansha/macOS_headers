//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSTextView;

__attribute__((visibility("hidden")))
@interface WKTextInputPanel : NSPanel
{
    NSTextView *_inputTextView;
}

- (BOOL)_hasMarkedText;
- (id)_inputContext;
- (BOOL)_interpretKeyEvent:(id)arg1 usingLegacyCocoaTextInput:(BOOL)arg2 string:(id *)arg3;
- (void)_unmarkText;
- (id)init;
- (void)dealloc;

@end

