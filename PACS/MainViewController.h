//
//  MainViewController.h
//  PACS
//
//  Created by Gokhan Dilek on 2015-01-28.
//  Copyright (c) 2015 Gokhan Dilek. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController<UITableViewDelegate,UITableViewDataSource, UIAlertViewDelegate>

{
    
    NSMutableArray *m_arrPatient;
    //NSString *turlFromLoginViewController;
    NSMutableArray *m_arrPatientSortedByStudyPk;
}



@property (nonatomic) NSInteger *studyIDtoBePassed;
@property (nonatomic) NSInteger *studyId;
@property (weak, nonatomic) IBOutlet UITableView *tblPatients;
@property(nonatomic)NSString *wadoUrl;
@property(nonatomic)NSString *webServiceDirectoryFromLogin;



@end
