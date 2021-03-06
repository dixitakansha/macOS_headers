//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TAPageControllerProtocol-Protocol.h"

@class NSTextField, NSView, TAProgressView;

@interface TAProgressPageController : NSObject <TAPageControllerProtocol>
{
    unsigned long long _mode;
    long long _tag;
    TAProgressView *_progressIndicator;
    NSTextField *_messageText;
    NSView *_page;
}

@property(retain, nonatomic) NSView *page; // @synthesize page=_page;
@property(retain, nonatomic) NSTextField *messageText; // @synthesize messageText=_messageText;
@property(retain, nonatomic) TAProgressView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)setMode:(unsigned long long)arg1;
- (void)setMessage:(id)arg1;
- (void)stopProgressAnimation;
- (void)startProgressAnimation;

@end

