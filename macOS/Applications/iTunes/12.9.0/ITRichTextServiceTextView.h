//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@interface ITRichTextServiceTextView : NSTextView
{
    struct weak_ptr<ITRichTextServiceMacOS> mRichTextService;
    BOOL _handlingMouseDown;
}

@property(nonatomic) BOOL handlingMouseDown; // @synthesize handlingMouseDown=_handlingMouseDown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (shared_ptr_0a3c55a2)richTextService;
- (void)setRichTextService:(shared_ptr_0a3c55a2)arg1;
- (void)dealloc;

@end

