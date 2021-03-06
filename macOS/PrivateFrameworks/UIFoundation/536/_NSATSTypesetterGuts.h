//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSATSGlyphStorage, NSATSLineFragment;

@interface _NSATSTypesetterGuts : NSObject
{
    NSATSLineFragment *_lineFragment;
    NSATSGlyphStorage *_glyphStorage;
    unsigned long long _lastGlyphIndex;
    unsigned long long _lastContainerIndex;
    CDStruct_9b8416ed *_typesetterAuxiliary;
    CDUnion_09a75e3c *_lineFragmentRectArgs;
    char *_bidiLevels;
    double _defaultTighteningFactor;
    unsigned long long _lineBreakStrategy;
    _Bool _isBusy;
    struct {
        unsigned int _isiChatTypesetter:1;
        unsigned int _resToWillSetLineFragmentRect:1;
        unsigned int _reserved2:1;
        unsigned int _baselineRendering:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _reserved:27;
    } _flags;
    struct {
        unsigned int _resolvedWritingDirection:2;
        unsigned int _reserved:30;
    } _paragraphState;
    struct __CTTypesetter *_ctTypesetter;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithTypesetter:(id)arg1;

@end

