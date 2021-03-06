//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXSelection, NSArray, NSDictionary, NSString, NSView, RDTable;
@protocol IPXMetadataUpdateDelegate;

@protocol IPXMetadataEditorViewController <NSObject>
- (BOOL)updateViewWithPreparedData:(NSDictionary *)arg1 isNew:(BOOL)arg2;
- (void)prepareDataForSelection:(IPXSelection *)arg1 updateDelegate:(id <IPXMetadataUpdateDelegate>)arg2 updateToken:(unsigned long long)arg3;
- (NSArray *)propertiesForTable:(RDTable *)arg1;
- (NSArray *)tableClasses;
- (NSString *)editorIdentifier;

@optional
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly, nonatomic) NSView *initialFirstResponder;
- (void)saveChanges;
- (void)disableEditor;
@end

