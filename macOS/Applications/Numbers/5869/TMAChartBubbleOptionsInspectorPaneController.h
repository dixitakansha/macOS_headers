//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneController.h"

@class NSArrayController, NSButton, NSPopUpButton, NSTextField;

@interface TMAChartBubbleOptionsInspectorPaneController : TMAChartInspectorPaneController
{
    NSTextField *mRepresentLabel;
    NSPopUpButton *mRepresentPopupButton;
    NSArrayController *mSeriesArrayController;
    NSButton *_showNegativeCheckbox;
}

+ (long long)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) __weak NSButton *showNegativeCheckbox; // @synthesize showNegativeCheckbox=_showNegativeCheckbox;
@property(retain, nonatomic) NSArrayController *seriesArrayController; // @synthesize seriesArrayController=mSeriesArrayController;
@property(nonatomic) __weak NSPopUpButton *representPopupButton; // @synthesize representPopupButton=mRepresentPopupButton;
@property(nonatomic) __weak NSTextField *representLabel; // @synthesize representLabel=mRepresentLabel;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end

