//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, NSStepper, NSTextField, TMAInspectorCheckBoxButton, TMAInspectorPopupButton, TMAInspectorTextField;

@interface TMAChartTrendlineInspectorPaneController : TMAChartInspectorPaneGroupController
{
    TMAInspectorPopupButton *mTrendlineTypePopup;
    TMAInspectorCheckBoxButton *mTrendlineNameCheckbox;
    NSTextField *mTrendlineNameTextField;
    TMAInspectorCheckBoxButton *mShowEquationCheckbox;
    TMAInspectorCheckBoxButton *mShowR2Checkbox;
    NSTextField *mMovingAveragePeriodLabel;
    TMAInspectorTextField *mMovingAveragePeriodTextField;
    NSStepper *mMovingAveragePeriodStepper;
    NSTextField *mOrderLabel;
    TMAInspectorTextField *mOrderTextField;
    NSStepper *mOrderStepper;
    NSArrayController *mSeriesArrayController;
    NSArrayController *mTrendlineTypesArrayController;
    TMAInspectorPopupButton *_trendlineTypePopup;
}

+ (long long)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (id)seriesArrayBindingKeyPath;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) TMAInspectorPopupButton *trendlineTypePopup; // @synthesize trendlineTypePopup=_trendlineTypePopup;
@property(nonatomic) NSStepper *orderStepper; // @synthesize orderStepper=mOrderStepper;
@property(nonatomic) TMAInspectorTextField *orderTextField; // @synthesize orderTextField=mOrderTextField;
@property(nonatomic) NSTextField *orderLabel; // @synthesize orderLabel=mOrderLabel;
@property(nonatomic) NSStepper *movingAveragePeriodStepper; // @synthesize movingAveragePeriodStepper=mMovingAveragePeriodStepper;
@property(nonatomic) TMAInspectorTextField *movingAveragePeriodTextField; // @synthesize movingAveragePeriodTextField=mMovingAveragePeriodTextField;
@property(nonatomic) NSTextField *movingAveragePeriodLabel; // @synthesize movingAveragePeriodLabel=mMovingAveragePeriodLabel;
@property(nonatomic) TMAInspectorCheckBoxButton *showR2Checkbox; // @synthesize showR2Checkbox=mShowR2Checkbox;
@property(nonatomic) TMAInspectorCheckBoxButton *showEquationCheckbox; // @synthesize showEquationCheckbox=mShowEquationCheckbox;
@property(nonatomic) NSTextField *trendlineNameTextField; // @synthesize trendlineNameTextField=mTrendlineNameTextField;
@property(nonatomic) TMAInspectorCheckBoxButton *trendlineNameCheckbox; // @synthesize trendlineNameCheckbox=mTrendlineNameCheckbox;
@property(retain, nonatomic) NSArrayController *trendlineTypesArrayController; // @synthesize trendlineTypesArrayController=mTrendlineTypesArrayController;
@property(retain, nonatomic) NSArrayController *seriesArrayController; // @synthesize seriesArrayController=mSeriesArrayController;
- (BOOL)shouldHideCheckBox;
- (void)dealloc;
- (void)awakeFromNib;

@end

