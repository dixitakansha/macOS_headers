//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSValueBinderPlugin.h>

#import <AppKit/_NSSelectionBinderPlugin-Protocol.h>

@class NSString;

@interface _NSSelectionBinderPlugin : _NSValueBinderPlugin <_NSSelectionBinderPlugin>
{
}

- (void)populateObject:(id)arg1 withContent:(id)arg2 valueKey:(id)arg3 objectKey:(id)arg4 insertsNullPlaceholder:(BOOL)arg5;
- (BOOL)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)arg1;
- (void)storeModeWhenIgnoringObjectPopulation:(struct __NSKeyValueCodingControllerModeType)arg1;
- (BOOL)canIgnorePopulatingObject:(id)arg1;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (BOOL)canMixDynamicAndStaticContent;
- (BOOL)canPopulateWithPlaceholders;
- (void)addContentObject:(id)arg1 isPlaceholder:(BOOL)arg2 insertsNullPlaceholder:(BOOL)arg3 value:(id)arg4 index:(long long)arg5 cellOrControl:(id)arg6;
- (void)removeAllContentObjectsInCellOrControl:(id)arg1;
- (unsigned long long)allowedContentBindingMask;
- (BOOL)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(char *)arg3;
- (Class)valueClass:(id)arg1 forBinding:(id)arg2;
- (Class)_valueClass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

