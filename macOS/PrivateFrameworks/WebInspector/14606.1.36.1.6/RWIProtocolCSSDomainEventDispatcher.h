//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RWIProtocolCSSDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (void)styleSheetRemovedWithStyleSheetId:(id)arg1;
- (void)styleSheetAddedWithHeader:(id)arg1;
- (void)styleSheetChangedWithStyleSheetId:(id)arg1;
- (void)mediaQueryResultChanged;
- (id)initWithController:(struct AugmentableInspectorController *)arg1;

@end

