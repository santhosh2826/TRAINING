import { ComponentFixture, TestBed } from '@angular/core/testing';

import { AngularoperationComponent } from './angularoperation.component';

describe('AngularoperationComponent', () => {
  let component: AngularoperationComponent;
  let fixture: ComponentFixture<AngularoperationComponent>;

  beforeEach(() => {
    TestBed.configureTestingModule({
      declarations: [AngularoperationComponent]
    });
    fixture = TestBed.createComponent(AngularoperationComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
